#include "Video.h"

Video::Video(int id, std::string name, int duration, std::string genre, float rentCost, float saleCost, float rating)
    : id(id), name(name), duration(duration), genre(genre), rentCost(rentCost), saleCost(saleCost), rating(rating) {
}
Video::~Video() {
    // Implementación del destructor si es necesario
}

float Video::getAverageRating() {
    // Implementación para calcular y devolver el promedio de calificación
    return rating; // Implementación de ejemplo
}

//setters
void Video::setId(int id){this->id = id;}
void Video::setName(string name){this->name = name;}
void Video::setDuration(int duration){this->duration = duration;}
void Video::setGenre(string genre){this->genre = genre;}
void Video::setRentCost(float rentCost){this->rentCost = rentCost;}
void Video::setSaleCost(float saleCost){this->saleCost = saleCost;}

//getters
int Video::getId()const {return id;}
string Video::getName()const {return name;}
int Video::getDuration()const {return duration;}
string Video::getGenre()const {return genre;}
float Video::getRentCost()const {return rentCost;}
float Video::getSaleCost()const {return saleCost;}
float Video::getRating() const { return rating; }


//display data
void Video::getData()const {
    cout << "ID: " << id << endl;
    cout << "Title: " << name << endl;
    cout << "Length: " << duration << " minutes" << endl;
    cout << "Genre: " << genre << endl;
    cout << "Rental cost: " << rentCost << " MXS" << endl;
    cout << "Sale cost: " << saleCost << " MXS" << endl;
    cout << "Rating: " << rating << endl;
    
}
