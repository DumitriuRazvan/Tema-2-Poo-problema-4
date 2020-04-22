#ifndef COADA_PRIORITATE_H
#define COADA_PRIORITATE_H

class Coada_prioritate
{
private:
    Nod_prioritate *p_first;
    Nod_prioritate *p_last;
public:
    Coada_prioritate():
        p_first(nullptr),p_last(nullptr)
    {

    }
    void insert(char *cuvant, int prioritate)
    {
        Nod_prioritate *temp;
        temp = new Nod_prioritate(cuvant,nullptr,nullptr,prioritate);
        if(p_last == nullptr)
            p_first = p_last = temp;
        else
        {
            p_last->set_next(temp);
            temp->set_ante(p_last);
            p_last = temp;
        }
    }
    Nod_prioritate& top()
    {
        Nod_prioritate *i, *p_prio_maxima;
        int prio_maxima = 0;
        for(i=p_first;i!=nullptr;i=i->get_next())
        {
            if(i->get_prio() > prio_maxima)
            {
                prio_maxima = i->get_prio();
                p_prio_maxima = i;
            }
        }
        return *p_prio_maxima;
    }
    void pop()
    {
        auto *temp = p_first->get_next();
        temp->set_ante(nullptr);
        delete p_first;
        p_first = temp;
    }
    void empty()
    {
        Nod_prioritate *i;
        for(i=p_first;i!=nullptr;i=i->get_next())
        {
            auto *temp = p_first->get_next();
            delete p_first;
            p_first = temp;
        }
    }
friend std::ostream& operator <<(std::ostream &out, const Coada_prioritate& aux);
friend std::istream& operator>>(std::istream &in, Coada_prioritate& aux);


};
std::ostream& operator <<(std::ostream &out, const Coada_prioritate& aux)
{
    out << "Coada este:" << " ";
    for(Nod_prioritate *i=aux.p_first;i!=nullptr;i=i->get_next())
        {
         out << i->get_info() << " ";
        }
    out << std::endl;
    return out;
}
std::istream& operator>>(std::istream &in, Coada_prioritate& aux)
{
    char cuv[300];
    int prioritate,nr;
    std::cout << "Numarul de cuvinte: "; in >> nr;
    for(int i=1;i<=nr;i++){
        std::cout << "Cuvantul"<<" "<<i<<std::endl;
        std::cout << "cuvant: "; in.get(); in.getline(cuv,300);
        std::cout << "prioritate: "; in >> prioritate;
        aux.insert(cuv,prioritate);
    }
    return in;
}
#endif // COADA_PRIORITATE_H
