class Hero{
    public :
    char level;

    private:
    int health;

    int getHealth(){
        return health;
    }
    void setHealth(){
        this->health=health;
    }

private:
~Hero(){
    cout<<"Destrouctor has been called ";
}
};
int main(){

    Hero Kaynati;


    Hero *kinat=new Hero();
    return 0;
}