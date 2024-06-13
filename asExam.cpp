#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Clase abstracta que sirve como interfaz para los elementos de la biblioteca
class Item {
public:
    // Método virtual puro, todas las clases derivadas deben implementarlo
    virtual void display() const = 0;
    virtual ~Item() {}
};

// Clase base Book, implementa la interfaz Item
class Book : public Item {
protected:
    string title;
    string author;
    int pages;
public:
    Book(const string& t, const string& a, int p) : title(t), author(a), pages(p) {}

    // Implementación del método display() de la interfaz Item
    void display() const override {
        cout << "Book Title: " << title << ", Author: " << author << ", Pages: " << pages << endl;
    }

    // Método para obtener el título del libro (modificador de acceso: público)
    string getTitle() const { return title; }

    // Método para obtener el autor del libro (modificador de acceso: público)
    string getAuthor() const { return author; }
};

// Clase derivada de Book, específica para libros electrónicos
class Ebook : public Book {
    string format;
public:
    Ebook(const string& t, const string& a, int p, const string& f) : Book(t, a, p), format(f) {}

    // Sobrescritura del método display() para incluir el formato del ebook
    void display() const override {
        cout << "Ebook Title: " << title << ", Author: " << author << ", Pages: " << pages << ", Format: " << format << endl;
    }

    // Sobrecarga del método display() para mostrar solo el formato del ebook
    void display(const string& infoType) const {
        if (infoType == "format") {
            cout << "Ebook Format: " << format << endl;
        } else {
            display();
        }
    }
};

// Clase base Member
class Member {
protected:
    string name;
public:
    Member(const string& n) : name(n) {}

    // Método para mostrar información del miembro
    virtual void showInfo() const {
        cout << "Member Name: " << name << endl;
    }

    virtual ~Member() {}
};

// Clase derivada de Member, específica para estudiantes
class Student : public Member {
    int studentID;
public:
    Student(const string& n, int id) : Member(n), studentID(id) {}

    // Sobrescritura del método showInfo() para incluir el ID del estudiante
    void showInfo() const override {
        cout << "Student Name: " << name << ", Student ID: " << studentID << endl;
    }
};

// Función principal
int main() {
    // Uso de polimorfismo: creamos un vector de punteros a la clase base Item
    vector<Item*> libraryItems;

    // Agregamos objetos de diferentes tipos a la biblioteca
    libraryItems.push_back(new Book("1984", "George Orwell", 328));
    libraryItems.push_back(new Ebook("Brave New World", "Aldous Huxley", 288, "PDF"));

    // Mostramos los elementos de la biblioteca usando el polimorfismo
    for (const auto& item : libraryItems) {
        item->display();
    }

    // Liberamos la memoria asignada dinámicamente
    for (auto& item : libraryItems) {
        delete item;
    }

    // Uso de la clase derivada Student
    Member* member = new Student("Alice", 12345);
    member->showInfo();
    delete member;

    return 0;
}
