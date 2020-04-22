#ifndef NOD_H
#define NOD_H
#define N_MAX 300

class Nod
{
private:
    char m_info[N_MAX];
    Nod* m_next;
    public:
        Nod(): m_next(nullptr)
        {
            std::strcpy(m_info,"Anonim");
        }
        Nod(char* info, Nod* next = nullptr): m_next(next)
        {
            std::strcpy(m_info,info);
        }
        Nod( const Nod& aux): m_next(aux.m_next)
        {
            std::strcpy(m_info,aux.m_info);
        }
        Nod& operator= (const Nod &aux)
        {
            std::strcpy(m_info,aux.m_info);
            m_next = aux.m_next;
            return *this;
        }


        friend std::ostream& operator<<(std::ostream &out, const Nod& aux);
        friend std::istream& operator>>(std::istream &in, Nod& aux);
        ~Nod()
        {
            strcpy(m_info,"");
//            delete[] m_info;
            m_next = nullptr;
        }
        Nod* get_next()
        {
            return m_next;
        }
        char* get_info()
        {
            return m_info;
        }
        void set_next( Nod* ob)
        {
            m_next = ob;
        }
        void set_info(char *t)
        {
            strcpy(m_info,t);
        }
};

std::ostream& operator<<(std::ostream &out, const Nod& aux)
{
    out << aux.m_info << std::endl;
    return out;
}
std::istream& operator>>(std::istream &in, Nod& aux)
{
    std::cout << "Valoarea nodului: ";
    in >> aux.m_info;
    return in;
}

#endif // NOD_
