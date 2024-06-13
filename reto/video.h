#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
#include <string>
using namespace std;

class Video{
    public:
        //constructor
        Video(int id, string name, int duration, string genre, float rentCost, float saleCost, float rating = 0.0);
        virtual ~Video(); 

        //setters
        void setId(int id);
        void setName(string name);
        void setDuration(int duration);
        void setGenre(string genre);
        void setRentCost(float rentCost);
        void setSaleCost(float saleCost);
        void setRating(float rating); // Optional

        //getters
        int getId() const;
        string getName() const;
        int getDuration() const;
        string getGenre() const;
        float getRentCost() const;
        float getSaleCost() const;
        float getGrade() const;
        float getRating() const; 

        //display data
        virtual float getAverageRating();
        virtual void getData() const;
        
    private:
        int id;
        string name;
        int duration;
        string genre;
        float rentCost;
        float saleCost;
        float rating;
};

#endif // VIDEO_H

