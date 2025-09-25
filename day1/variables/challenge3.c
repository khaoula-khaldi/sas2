// chalenge 4
#include <stdio.h>

int main() {
    float km_h,m_s;
    float vitesse;
    printf ("entre la vitesse en km/h : ");
    scanf("%f",&km_h);
    m_s = 0.27778;
    vitesse=km_h*m_s;
    printf (" voila la vitesse %f",vitesse);

    return 0;
}