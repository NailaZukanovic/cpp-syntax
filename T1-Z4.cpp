#include<iostream>



int main()
{


        double n;

        while(True){
            std::cout << "Uneiste prirodan broj n ";
            std::cin >> n;

            if(!std::cin)
            {
                std::cout<<"Greska";
                std::cin.clear();
                std::cin.ignore(10000,'\n');
                 std::cout<<n;
                break;
            }
            if(n == 0)
            {
                std::cout<<"Dovidjenja";
                return 0;
            }

            if(n - (int)n != 0 || n<0)
            {
                std::cout<<"Niste uneli prirodan broj"<<std::endl;
                continue;
            }

        }

        int suma{0};

        for(int i=1; i<n; i++)
            if((int)n%i == 0)
                suma+=i;

        if(n == suma)
            std::cout << "Broj je savrsen" << std::endl;

        else if(n < suma)
            std::cout << "Broj je obilan" << std::endl;

        else
            std::cout << "Broj je manjkav" << std::endl;

}
