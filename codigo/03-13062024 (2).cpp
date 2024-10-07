#include <iostream>
using namespace std;

// CÓDIGO ESCRITO PARA MOSTRAR O FUNCIONAMENTO DO LAÇO DE REPETIÇÃO "WHILE"

int main()
{
    setlocale(LC_ALL,"");  // Ativa o uso de acentos
    // -------------------------------
    int continuar,cargaMaxima, cargaUtilizada,vezesQueSubiu,vezesQueExedeuCarga,totalDeCarga;
    
    vezesQueSubiu = 0;
    vezesQueExedeuCarga = 0;
    totalDeCarga = 0;
    continuar = 1;
    
    cout << "INFORME A CARGA MÁXIMA QUE O ELEVADOR PODE LEVAR: ";
        cin >> cargaMaxima;
    
    while (continuar)
    {       
        system("cls");
        
        cout << "INFORME A CARGA QUE VOCÊ QUER QUE O ELEVADOR SUBA: ";
        cin >> cargaUtilizada;
        
        if(cargaUtilizada <= cargaMaxima)
        {
            cout << "OK, ELEVADOR LIBERADO PARA SUBIR\n";
            cargaUtilizada;
            totalDeCarga = totalDeCarga + cargaUtilizada;
        }else{
            cout << "LIMITE DE CARGA EXCEDIDO, FAVOR VERIFICAR\n";
            vezesQueExedeuCarga++;
        }
        cout << "TEM MAIS CARGA PARA SUBIR? \n CASO TENHA DIGITE 1 ";
        cin >> continuar;
        vezesQueSubiu++;
        
    }
    system("cls");
    
    cout << "TOTAL DE VEZES QUE SUBIU: " << vezesQueSubiu - vezesQueExedeuCarga<< "\n";
    cout << "TOTAL DE VEZES QUE A CARGA FOI EXEDIDA: " << vezesQueExedeuCarga << "\n";
    cout << "TOTAL DE CARGA QUE SUBIU : " << totalDeCarga << "\n";
    


    // -------------------------------
    system("pause");
    return 0;
}


