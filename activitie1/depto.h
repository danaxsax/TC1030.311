#ifdef depto
#define depto

class Departamento {
    private:
        int idDep();
        string nombre();
    public:
        Depto();
        Departamento(int idDep, string nombre);
        int getIdDep();
        void setIdDep(int id);
        string getNombre();
        void setNombre(string nombre);
        
}
#endif 