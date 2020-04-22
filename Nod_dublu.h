#ifndef NOD_DUBLU_H
#define NOD_DUBLU_H


class Nod_dublu: public Nod
{
private:
    Nod_dublu* m_ante;
    Nod_dublu* m_next;

    public:
        Nod_dublu(): Nod(),
                    m_ante(nullptr)
        {

        }
        Nod_dublu(char* info, Nod_dublu* next = nullptr, Nod_dublu* ante = nullptr): Nod(info,next),
                                                                        m_ante(ante)
        {

        }
        Nod_dublu( const Nod_dublu& aux): Nod(aux), m_ante(aux.m_ante)
        {

        }
        Nod_dublu& operator= (const Nod_dublu &aux)
        {
            this->Nod::operator=(aux);
            m_ante = aux.m_ante;
            return *this;
        }
        ~Nod_dublu()
        {
            m_ante = nullptr;
        }
        void set_next(Nod_dublu *ob)
        {
            m_next = ob;
        }
        void set_ante(Nod_dublu *ob)
        {
            m_ante = ob;
        }
        Nod_dublu* get_ante()
        {
            return m_ante;
        }
        Nod_dublu* get_next()
        {
            return m_next;
        }
};


#endif //

