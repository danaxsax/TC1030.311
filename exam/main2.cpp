#include <iostream>
#include <string>
#include <vector>
#include <stdexcept> // Para usar excepciones estándar

using namespace std;

// Definición de una excepción personalizada para estudiantes no encontrados
class StudentNotFoundException : public exception {
public:
    virtual const char* what() const throw() {
        return "Student not found.";
    }
};

// Class Subject
class Subject {
private:
    string name;
    vector<double> grades;

public:
    Subject(string name) : name(name) {}

    void addGrade(double grade) {
        grades.push_back(grade);
    }

    double calculateAverage() const {
        if (grades.empty()) {
            throw logic_error("Cannot calculate average: No grades available.");
        }
        double sum = 0.0;
        for (double grade : grades) {
            sum += grade;
        }
        return sum / grades.size();
    }

    string getName() const {
        return name;
    }

    const vector<double>& getGrades() const {
        return grades;
    }
};

// Class Student
class Student {
private:
    string name;
    Subject subject;

public:
    Student(string name, Subject subject) : name(name), subject(subject) {}

    string getName() const {
        return name;
    }

    const Subject& getSubject() const {
        return subject;
    }
};

// Function to display the menu and manage options
void displayMenu(vector<Student>& students) {
    int option;
    string studentName, subjectName;
    double grade;

    do {
        cout << "\nMENU:\n";
        cout << "1. Registrar estudiante con materia y cuatro calificaciones \\n";
        cout << "2. Calcular la calificación promedio por estudiante\n";
        cout << "3. Consultar estudiante con materia y calificación promedio\n";
        cout << "4. Salir\n";
        cout << "Elije 1 opción: ";
        cin >> option;

        try {
            switch (option) {
                case 1:
                    cout << "Nombre: ";
                    cin >> studentName;
                    cout << "Materia: ";
                    cin >> subjectName;
                    {
                        Subject subject(subjectName);
                        for (int i = 1; i <= 4; ++i) {
                            cout << "calificaciones " << i << ": ";
                            cin >> grade;
                            subject.addGrade(grade);
                        }
                        Student student(studentName, subject);
                        students.push_back(student);
                    }
                    cout << "estudainte guardado.\n";
                    break;

                case 2:
                    cout << "\npromedio de estudiante t:\n";
                    if (students.empty()) {
                        throw logic_error("No hay estudiantes registrados.");
                    }
                    for (const Student& student : students) {
                        cout << "estudiante: " << student.getName() << ", promedio: " << student.getSubject().calculateAverage() << endl;
                    }
                    break;

                case 3:
                    cout << "\nCOnsultrar estudiantes:\n";
                    cout << "Nombre: ";
                    cin >> studentName;
                    {
                        bool found = false;
                        for (const Student& student : students) {
                            if (student.getName() == studentName) {
                                cout << "estudante encontrado:\n";
                                cout << "nombre: " << student.getName() << endl;
                                cout << "materias: " << student.getSubject().getName() << endl;
                                cout << "calificacion:\n";
                                const vector<double>& grades = student.getSubject().getGrades();
                                for (int i = 0; i < grades.size(); ++i) {
                                    cout << "calificaion " << (i + 1) << ": " << grades[i] << endl;
                                }
                                cout << "promedio: " << student.getSubject().calculateAverage() << endl;
                                found = true;
                                break;
                            }
                        }
                        if (!found) {
                            throw StudentNotFoundException();
                        }
                    }
                    break;

                case 4:
                    cout << "salidendo ...\n";
                    break;

                default:
                    cout << "opcion invalida, nuevo intneto\n";
                    break;
            }
        } catch (const exception& ex) {
            cerr << "Error: " << ex.what() << endl;
        }

    } while (option != 4);
}

int main() {
    vector<Student> students;

    displayMenu(students);

    return 0;
}
