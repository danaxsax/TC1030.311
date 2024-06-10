#ifdef empleado
#define empleado


class Empleado {
    private:
        int idEmp;
        string nombre;
        int numDep;
    public:
        Empleado();
        Empleado(int idEmp, string nombre, int numDep);
        int getIdEmp();
        string getNombre();
        int getNumDep();
}
#endif 
