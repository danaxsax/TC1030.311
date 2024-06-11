#ifndef MOVIE_H
#define MOVIE_H
#include "video.h"
using namespace std;

class Movie: public Video{
    public:
        //constructor
        Movie(int id, string name, int duration, string genre, int ranked, float rentCost, float saleCost, int score)
        : Video(id, name, duration, genre, ranked, rentCost, saleCost, score) {}

        void display() const {
            cout<<"Movie: ";
            display();
        }
};

#endif // MOVIE_H