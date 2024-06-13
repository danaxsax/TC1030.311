#include <string>
#include <iostream>
using namespace std;

class Video{
    public:
        Video (int id, string name, int duration, string genre, float rentCost, float saleCost, int rating) : id(id), name(name), duration(duration), genre(genre), rentCost(rentCost), saleCost(saleCost), rating(rating) ;
        float getid():
        void setid(int id);
        string getname();
        void setname(string name);
        int getduration();
        void setduration(int duration);
        string getgenre();
        void setgenre(string genre);
        float getrentCost();
        void setrentCost(float rentCost);
        float getsaleCost();
        void setsaleCost(float saleCost);
        int getrating();
        void setrating(int rating);
        void getdata();

    private:
        int id(){
            return id;
        };
        string name(){
            return name;
        };
        int duration(){
            return duration;
        };
        string genre(){
            return genre;
        };
        float rentCost(){
            return rentCost;
        };
        float saleCost(){
            return saleCost;
        };
        int rating(){
            return rating;
        };
        void setid(int id){
            this->id = id;
        };
        void setname(string name){
            this->name = name;
        };
        void setduration(int duration){
            this->duration = duration;
        };
        void setgenre(string genre){
            this->genre = genre;
        };
        void setrentCost(float rentCost){
            this->rentCost = rentCost;
        };
        void setsaleCost(float saleCost){
            this->saleCost = saleCost;
        };
        void setrating(int rating){
            this->rating = rating;
        };
        float getid(){
            return id;
        };
        void getdata(){
            cout<<"ID: "<<id<<endl;
            cout<<"Nombre: "<<name<<endl;
            cout<<"Duracion: "<<duration<<endl;
            cout<<"Genero: "<<genre<<endl;
            cout<<"Costo de renta: "<<rentCost<<endl;
            cout<<"Costo de venta: "<<saleCost<<endl;
            cout<<"Rating: "<<rating<<endl;
        };
        int getduration(){
            return duration;
        };
        int getrating(){
            return rating;
        };
        float getrentCost(){
            return rentCost;
        };
        float getsaleCost(){
            return saleCost;
        };
        string getname(){
            return name;
        };
        string getgenre(){
            return genre;
        };
};

class Movie: public Video{
    public:
        
    private:
        
};

class Serie: public Video{
    public:
        int getseasons(){
            return seasons;
        }
        int getepisodes(){
            return episodes
        }
        void setseasons(int seasons[3]){
            this->seasons = seasons;
        };
        void setepisodes(int episodes[10]){
            this->episodes = episodes;
        };
    private:
        int seasons[3];    
        int episodes[10];    
};
