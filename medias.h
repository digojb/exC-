#ifndef MEDIAS_H
#define MEDIAS_H

class medias {
public:
    medias();
    medias(const medias& orig);
    virtual ~medias();
    
    void lerDados();
    float calcMedia(float n1, float n2, float n3, char letra);
    
private:

};

#endif /* MEDIAS_H */

