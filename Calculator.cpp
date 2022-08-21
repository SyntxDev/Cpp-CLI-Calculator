
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    cout << "               ******************         CLI Calculator by Syntx Dev         ******************       " << endl;

    //Variables
    float kullaniciSayisi1, kullaniciSayisi2, sonuc, width, height, base, radius;
    int sayi;
    int opt;
    float pi = 3.14159265;
    

    //Options   
    main:
    cout << " " << endl;
    cout << "Options" << endl;
    cout << " " << endl;
    cout << " 1. Addition" << endl;
    cout << " " << endl;
    cout << " 2. Subtraction" << endl;
    cout << " " << endl;
    cout << " 3. Multiplication" << endl;
    cout << " " << endl;
    cout << " 4. Division" << endl;
    cout << " " << endl;
    cout << " 5. Trigonometric Functions" << endl;
    cout << " " << endl;
    cout << " 6. Power" << endl;
    cout << " " << endl;
    cout << " 7. hypotenuse" << endl;
    cout << " " << endl;
    cout << " 8. Area Calculate" << endl;
    cout << " " << endl;
    cout << " 9. Square Root" << endl;
    cout << " " << endl;
    cout << " 10. Exit" << endl;
    cout << " " << endl;



    //User Input
    cin >> opt;
    
    if (opt > 10) {
        cout << "Invalid option" << endl;
        goto main;
    }
    
    //Loops
    if (opt == 1) 
    {
        toplamas:
        cout << "Please enter 1st number" << endl;
        cin >> kullaniciSayisi1;

        cout << "Please enter 2nd number" << endl;
        cin >> kullaniciSayisi2;

        sonuc = kullaniciSayisi1 + kullaniciSayisi2;

        cout << "Answer: " << sonuc << endl;

        cout << " " << endl;
        cout << "1. New Operation" << endl;
        cout << " " << endl;
        cout << "2. Main Menu" << endl;
        cin >> opt;

        seceneks:
        if (opt == 1)
        {
            goto toplamas;
        }
        else if(opt == 2) {
            goto main;
        }
        else if (opt > 2) {
            cout << "Invalid option" << endl;
            goto seceneks;
        }
    }
    else if (opt == 2) 
    {
        cıkarmas:
        cout << "Please enter 1st number" << endl;
        cin >> kullaniciSayisi1;

        cout << "Please enter 2nd number" << endl;
        cin >> kullaniciSayisi2;

        sonuc = kullaniciSayisi1 - kullaniciSayisi2;

        cout << "Answer: " << sonuc << endl;

        cout << " " << endl;
        cout << "1. New Operation" << endl;
        cout << " " << endl;
        cout << "2. Main Menu" << endl;
        cin >> opt;

    cıkarmaseceneks:
        if (opt == 1)
        {
            goto cıkarmas;
        }
        else if (opt == 2) {
            goto main;
        }
        else if (opt > 2) {
            cout << "Invalid option" << endl;
            goto cıkarmaseceneks;
        }
    }
    else if (opt == 3)
    {
    multip:
        cout << "Please enter 1st number" << endl;
        cin >> kullaniciSayisi1;

        cout << "Please enter 2nd number" << endl;
        cin >> kullaniciSayisi2;

        sonuc = kullaniciSayisi1 * kullaniciSayisi2;

        cout << "Answer: " << sonuc << endl;

        cout << " " << endl;
        cout << "1. New Operation" << endl;
        cout << " " << endl;
        cout << "2. Main Menu" << endl;
        cin >> opt;

    multipseceneks:
        if (opt == 1)
        {
            goto multip;
        }
        else if (opt == 2) {
            goto main;
        }
        else if (opt > 2) {
            cout << "Invalid option" << endl;
            goto multipseceneks;
        }
    }
    else if (opt == 4)
    {
    divi:
        cout << "Please enter 1st number" << endl;
        cin >> kullaniciSayisi1;

        cout << "Please enter 2nd number" << endl;
        cin >> kullaniciSayisi2;

        sonuc = kullaniciSayisi1 / kullaniciSayisi2;

        cout << "Answer: " << sonuc << endl;

        cout << " " << endl;
        cout << "1. New Operation" << endl;
        cout << " " << endl;
        cout << "2. Main Menu" << endl;
        cin >> opt;

    diviseceneks:
        if (opt == 1)
        {
            goto divi;
        }
        else if (opt == 2) {
            goto main;
        }
        else if (opt > 2) {
            cout << "Invalid option" << endl;
            goto seceneks;
        }
    }
    else if (opt == 5)
    {
        trigono:
        cout << "Options" << endl;
        cout << "" << endl;
        cout << "1. Sin";
        cout << "" << endl;
        cout << "2. Cos" << endl;
        cout << "" << endl;
        cout << "3. Tan" << endl;
        cout << "" << endl;
        cout << "4. ASin" << endl;
        cout << "" << endl;
        cout << "5. ACos" << endl;
        cout << "" << endl;
        cout << "6. ACot" << endl;
        cout << "" << endl;
        cout << "7. Main Menu" << endl;
        

        cin >> opt;
        if (opt > 7) {
            cout << "Invalid option" << endl;
            goto trigono;
        }
        switch (opt)
        {
        case 1:
            cout << "Please enter 1st input" << endl;
            cin >> kullaniciSayisi1;
            sonuc = sin(kullaniciSayisi1);
            cout << "Answer: " << sonuc << endl;
            cout << " " << endl;
            cout << "1. New Operation" << endl;
            cout << " " << endl;
            cout << "2. Main Menu" << endl;
            cin >> opt;

        sinseceneks:
            if (opt == 1)
            {
                goto trigono;
            }
            else if (opt == 2) {
                goto main;
            }
            else if (opt > 2) {
                cout << "Invalid option" << endl;
                goto sinseceneks;
            }
            break;
        case 2:
            cout << "Please enter 1st input" << endl;
            cin >> kullaniciSayisi1;
            sonuc = cos(kullaniciSayisi1);
            cout << "Answer: " << sonuc << endl;
            cout << " " << endl;
            cout << "1. New Operation" << endl;
            cout << " " << endl;
            cout << "2. Main Menu" << endl;
            cin >> opt;

        cosseceneks:
            if (opt == 1)
            {
                goto trigono;
            }
            else if (opt == 2) {
                goto main;
            }
            else if (opt > 2) {
                cout << "Invalid option" << endl;
                goto cosseceneks;
            }
            break;
        case 3:
            cout << "Please enter 1st input" << endl;
            cin >> kullaniciSayisi1;
            sonuc = tan(kullaniciSayisi1);
            cout << "Answer: " << sonuc << endl;
            cout << " " << endl;
            cout << "1. New Operation" << endl;
            cout << " " << endl;
            cout << "2. Main Menu" << endl;
            cin >> opt;

        tanseceneks:
            if (opt == 1)
            {
                goto trigono;
            }
            else if (opt == 2) {
                goto main;
            }
            else if (opt > 2) {
                cout << "Invalid option" << endl;
                goto tanseceneks;
            }
            break;
        case 4:
            cout << "Please enter 1st input" << endl;
            cin >> kullaniciSayisi1;
            sonuc = asin(kullaniciSayisi1);
            cout << "Answer: " << sonuc << endl;
            cout << " " << endl;
            cout << "1. New Operation" << endl;
            cout << " " << endl;
            cout << "2. Main Menu" << endl;
            cin >> opt;

        asinseceneks:
            if (opt == 1)
            {
                goto trigono;
            }
            else if (opt == 2) {
                goto main;
            }
            else if (opt > 2) {
                cout << "Invalid option" << endl;
                goto asinseceneks;
            }
            break;
        case 5:
            cout << "Please enter 1st input" << endl;
            cin >> kullaniciSayisi1;
            sonuc = acos(kullaniciSayisi1);
            cout << "Answer: " << sonuc << endl;
            cout << " " << endl;
            cout << "1. New Operation" << endl;
            cout << " " << endl;
            cout << "2. Main Menu" << endl;
            cin >> opt;

        acosseceneks:
            if (opt == 1)
            {
                goto trigono;
            }
            else if (opt == 2) {
                goto main;
            }
            else if (opt > 2) {
                cout << "Invalid option" << endl;
                goto acosseceneks;
            }
            break;
        case 6:
            cout << "Please enter 1st input" << endl;
            cin >> kullaniciSayisi1;
            sonuc = atan(kullaniciSayisi1);
            cout << "Answer: " << sonuc << endl;
            cout << " " << endl;
            cout << "1. New Operation" << endl;
            cout << " " << endl;
            cout << "2. Main Menu" << endl;
            cin >> opt;

        atanseceneks:
            if (opt == 1)
            {
                goto trigono;
            }
            else if (opt == 2) {
                goto main;
            }
            else if (opt > 2) {
                cout << "Invalid option" << endl;
                goto atanseceneks;
            }
            break;
        case 7:
            goto main;
            break;
        }
    }
    else if (opt == 6)
    {
        powe:
        cout << "Please enter 1st input" << endl;
        cin >> kullaniciSayisi1;
        cout << "Please enter 2nd input" << endl;
        cin >> kullaniciSayisi2;

        sonuc = pow(kullaniciSayisi1, kullaniciSayisi2);
        cout << "Answer: " << sonuc << endl;
        cout << " " << endl;
        cout << "1. New Operation" << endl;
        cout << " " << endl;
        cout << "2. Main Menu" << endl;
        cin >> opt;

    powseceneks:
        if (opt == 1)
        {
            goto powe;
        }
        else if (opt == 2) {
            goto main;
        }
        else if (opt > 2) {
            cout << "Invalid option" << endl;
            goto powseceneks;
        }
    }
    else if (opt == 7)
    {
        hypo:
        cout << "Please enter 1st input" << endl;
        cin >> kullaniciSayisi1;
        cout << "Please enter 2nd input" << endl;
        cin >> kullaniciSayisi2;

        
        sonuc = hypot(kullaniciSayisi1, kullaniciSayisi2);
        cout << "Answer: " << sonuc << endl;
        cout << "" << endl;
        cout << "1. New Operation" << endl;
        cout << " " << endl;
        cout << "2. Main Menu" << endl;
        cin >> opt;

    hyposeceneks:
        if (opt == 1)
        {
            goto hypo;
        }
        else if (opt == 2) {
            goto main;
        }
        else if (opt > 2) {
            cout << "Invalid option" << endl;
            goto hyposeceneks;
        }
    }
    else if (opt == 8)
    {
        area:
        cout << "Options" << endl;
        cout << "" << endl;
        cout << "1. Square";
        cout << "" << endl;
        cout << "2. Rectangle" << endl;
        cout << "" << endl;
        cout << "3. Triangle" << endl;
        cout << "" << endl;
        cout << "4. Circle" << endl;
        cout << "" << endl;
        cout << "5. Main Menu" << endl;

        cin >> opt;

        if (opt > 5) {
            cout << "Invalid option" << endl;
            goto area;
        }

        switch (opt)
        {
            case 1:
                cout << "Please enter width" << endl;
                cin >> width;
                cout << "Please enter height" << endl;
                cin >> height;

                sonuc = width * height;

                cout << "Answer: " << sonuc << endl;

                cout << "" << endl;
                cout << "1. New Operation" << endl;
                cout << " " << endl;
                cout << "2. Main Menu" << endl;
                cin >> opt;

            squseceneks:
                if (opt == 1)
                {
                    goto area;
                }
                else if (opt == 2) {
                    goto main;
                }
                else if (opt > 2) {
                    cout << "Invalid option" << endl;
                    goto squseceneks;
                }
            
                break;
            case 2:
                cout << "Please enter width" << endl;
                cin >> width;
                cout << "Please enter height" << endl;
                cin >> height;

                sonuc = width * height;

                cout << "Answer: " << sonuc << endl;

                cout << "" << endl;
                cout << "1. New Operation" << endl;
                cout << " " << endl;
                cout << "2. Main Menu" << endl;
                cin >> opt;

            rectseceneks:
                if (opt == 1)
                {
                    goto area;
                }
                else if (opt == 2) {
                    goto main;
                }
                else if (opt > 2) {
                    cout << "Invalid option" << endl;
                    goto rectseceneks;
                }
                break;
            case 3:
                cout << "Please enter base" << endl;
                cin >> base;
                cout << "Please enter height" << endl;
                cin >> height;

                sonuc = (base * height) / 2;

                cout << "Answer: " << sonuc << endl;
                
                cout << "" << endl;
                cout << "1. New Operation" << endl;
                cout << " " << endl;
                cout << "2. Main Menu" << endl;
                cin >> opt;
            triseceneks:
                if (opt == 1)
                {
                    goto area;
                }
                else if (opt == 2) {
                    goto main;
                }
                else if (opt > 2) {
                    cout << "Invalid option" << endl;
                    goto triseceneks;
                }
                break;
            case 4:
                cout << "Please enter radius" << endl;
                cin >> radius;


                sonuc = radius * radius * pi;

                cout << "Answer: " << sonuc << endl;

                cout << "" << endl;
                cout << "1. New Operation" << endl;
                cout << " " << endl;
                cout << "2. Main Menu" << endl;
                cin >> opt;
            circseceneks:
                if (opt == 1)
                {
                    goto area;
                }
                else if (opt == 2) {
                    goto main;
                }
                else if (opt > 2) {
                    cout << "Invalid option" << endl;
                    goto circseceneks;
                }
            case 5:
                goto main;
                break;
        }
    }
    else if (opt == 9)
    {
        sqrt:
        cout << "PLease enter input" << endl;
        cin >> sayi;
        sonuc = sqrt(sayi);

        cout << "Answer: " << sonuc << endl;

        cout << "" << endl;
        cout << "1. New Operation" << endl;
        cout << " " << endl;
        cout << "2. Main Menu" << endl;
        cin >> opt;
        sqrtseceneks:
        if (opt == 1)
        {
            goto sqrt;
        }
        else if (opt == 2) {
            goto main;
        }
        else if (opt > 2) {
            cout << "Invalid option" << endl;
            goto sqrtseceneks;
        }

    }
    else if (opt == 10)
    {
        system("pause");

    }


    return 0;
    

}

