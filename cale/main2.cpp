#include <string>
#include <iostream>
using namespace std;

class Video{
    public:
        Video (int id, string name, int duration, string genre, float rentCost, float saleCost, int rating) {
            this->id = id;
            this->name = name;
            this->duration = duration;
            this->genre = genre;
            this->rentCost = rentCost;
            this->saleCost = saleCost;
            this->rating = rating;
        }
        int getid():
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
        int id();
        string name();
        int duration();
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
};

class Serie: public Video{
    private:
        int seasons[3];    
        int episodes[10];   
    public:
        int getseasons(){
            return seasons;
        }
        int getepisodes(){
            return episodes;
        }
        void setseasons(int seasons[3]){
            this->seasons = seasons;
        };
        void setepisodes(int episodes[10]){
            this->episodes = episodes;
        };
     
};


int main(){
    int Nmovies, Nseries ;
    cout<<"Cuantas peliculas deseas registrar?"<<endl;
    cin>>Nmovies;
    cout<<"Cuantas series deseas registrar?"<<endl;
    cin>>Nseries;

    vector<Movie> m1;
    for (int i =0, i < Nmovies, i++){
        movies.empalce_back(Movie());
    }
    cout<<"Menu";
    return 0;
}