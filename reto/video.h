#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
#include <string>
using namespace std;

class Video{
    public:
        //constructor
        Video(int id, std::string name, int duration, std::string genre, int ranked, float rentCost, float saleCost, int score);


        //setters
        void setid(int id){this->id = id;}
        void setname(string name){this->name = name;}
        void setduration(int duration){this->duration = duration;}
        void setgenre(string genre){this->genre = genre;}
        void setranked(int ranked){this->ranked = ranked;}
        void setrentCost(float rentCost){this->rentCost = rentCost;}
        void setsaleCost(float saleCost){this->saleCost = saleCost;}
        void setscore(int score){this->score = score;}

        //getters
        int getid(){return id;}
        string getname(){return name;} 
        int getduration(){return duration;}
        string getgenre(){return genre;}
        int getranked(){return ranked;}
        float getrentCost(){return rentCost;}
        float getsaleCost(){return saleCost;}
        int getscore(){return score;}

        //display data
        virtual void getdata() const{
            cout<<"ID: "<<id<<endl;
            cout<<"Nombre: "<<name<<endl;
            cout<<"Duracion: "<<duration<<endl;
            cout<<"Genero: "<<genre<<endl;
            cout<<"Ranking: "<<ranked<<endl;
            cout<<"Costo de renta: "<<rentCost<<endl;
            cout<<"Costo de venta: "<<saleCost<<endl;
            cout<<"Calificacion: "<<score<<endl;
            }
        virtual ~Video() {}

    private:
        int id;
        string name;
        int duration;
        string genre;
        int ranked;
        float rentCost;
        float saleCost;
        int score;
};

#endif // VIDEO_H

