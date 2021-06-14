
#include<iostream>
using namespace std;

int mul(int a, int b)                                  //   3 + 3 + 3 + 3 
{                                                         //  3   2   1   3
    if(a==0 || b==0){return 0;}
    if(a==1) return b;
    if(b==1) return a;

    return (a + mul(a, b -1));
}

int multiply(int a , int b)
{
    int m = mul(a, abs(b));
     int mm=(b<0)? -m:m;
     return mm;
    
}
int main()
{
    cout <<multiply(3,4) <<endl;
    cout <<multiply(3,-4) <<endl;
}


---------------------------------------------------------------------------------
  résolution d'équation différentielle:
   
#include<iostream>
#include<cmath>


void Fermeture()
{
    std::cout << "Au revoir" << std::endl;
    system("pause");
}

int main()
{
    int A,B,C;
    std::cout << "Entrer votre equetion Ax2 + Bx + C = 0" << std::endl;
    std::cout << "Entrer la valeur de A" << std::endl;
    std::cin>> A;
    std::cout << "Entrer la valeur de B" << std::endl;
    std::cin>> B;
    std::cout << "Entrer la valeur de C" << std::endl;
    std::cin>> C;
    std:: cout << "L'equation à résoudre est : " << A<<"x2"<<"+"<<B<<"x"<<"+"<<C<< "= 0"<< std::endl;
    float D = B * B - 4 * A * C;
    if(A == 0)
    {
        float w = (- C)/B;
        std::cout << " La solution est: " << w << std::endl;
        Fermeture();
        return 0;
    }
    if(D > 0)
    {
        float x = sqrt(D);
        float y = (-B - x)/(2*A);
        float z = (-B + x)/(2*A);
        std::cout << "La solution est: " <<"x1 = " << y << " " << "x2 = "<< z << std::endl;
        Fermeture();
        return 0;
    }
    if(D == 0)
    {
        float w = -B/2*A;
        std::cout << "La solution est: " << w << std::endl;
        Fermeture();
        return 0;
    }
    if(D < 0)
    {
        std::cout << "Votre equation ne posséde de solution dans R" << std::endl;
        Fermeture();
        return 0;
    }

} 
   
    
   
