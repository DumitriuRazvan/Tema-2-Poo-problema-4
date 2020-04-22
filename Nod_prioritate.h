#ifndef NOD_PRIORITATE_H
#define NOD_PRIORITATE_H


class Nod_prioritate: public Nod_dublu
{
private:
    int m_prio;
    Nod_prioritate *m_next;
    Nod_prioritate *m_ante;
public:
        Nod_prioritate(): Nod_dublu(),
                        m_prio(1)
        {

        }
        Nod_prioritate(char* info, Nod_prioritate* next = nullptr, Nod_prioritate* ante = nullptr, int prioritate=1): Nod_dublu(info,next,ante),
                                                                                            m_prio(prioritate)
        {

        }
        Nod_prioritate& operator= (const Nod_prioritate &aux)
        {
            this->Nod_dublu::operator=(aux);
            m_prio = aux.m_prio;
            return *this;
        }
        ~Nod_prioritate()
        {
            m_prio = 0;
        }
        void set_next(Nod_prioritate *ob)
        {
            m_next = ob;
        }
        void set_ante(Nod_prioritate *ob)
        {
            m_ante = ob;
        }
        Nod_prioritate* get_ante()
        {
            return m_ante;
        }
        Nod_prioritate* get_next()
        {
            return m_next;
        }
        int get_prio()
        {
            return m_prio;
        }

};

#endif // NOD_PRIORITATE_H
