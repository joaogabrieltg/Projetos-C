#include <stdio.h>
#include <stdlib.h>
/**
 *3. Escreva um código que defina uma função que recebe uma data (no formato DD/09/2020),
 *verifica se está correta e armazene os valores em variáveis globais. Neste programa crie
 *duas funções chamadas ontem e amanha que devem mudar a data adequadamente.
 *Faça uma função mainpara demonstrar o uso dessas funções.
 */

int data(dia, ontem, amanha, mes, mesontem, mesamanha, ano, anoontem, anoamanha)
{
    if(mes==5 || mes==7 || mes==8 || mes==10)
    {
        if(dia>=1 && dia<=31)
        {
            if(dia==31)
            {
                amanha=1;
                mesamanha=mes+1;
                ontem=dia-1;
                mesontem=mes;
                anoontem=ano;
                anoamanha=ano;
            }
            else if(dia==1)
            {
                amanha=dia+1;
                mesamanha=mes;
                ontem=30;
                mesontem=mes-1;
                anoontem=ano;
                anoamanha=ano;
            }
            else if(dia>1 && dia<31)
            {
                amanha=dia+1;
                mesamanha=mes;
                ontem=dia-1;
                mesontem=mes;
                anoontem=ano;
                anoamanha=ano;
            }
        }
    }
    else if(mes==4 || mes==6 || mes==9 || mes==11)
    {
        if(dia>=1 && dia<=30)
        {
            if(dia==30)
            {
                amanha=1;
                mesamanha=mes+1;
                ontem=dia-1;
                mesontem=mes;
                anoontem=ano;
                anoamanha=ano;
            }
            else if(dia==1)
            {
                amanha=dia+1;
                mesamanha=mes;
                ontem=31;
                mesontem=mes-1;
                anoontem=ano;
                anoamanha=ano;
            }
            else if(dia>1 && dia<30)
            {
                amanha=dia+1;
                mesamanha=mes;
                ontem=dia-1;
                mesontem=mes;
                anoontem=ano;
                anoamanha=ano;
            }
        }
    }
    else if(mes==1)
    {
        if(dia==31)
        {
            amanha=1;
            mesamanha=mes+1;
            ontem=dia-1;
            mesontem=mes;
            anoontem=ano;
            anoamanha=ano;
        }
        else if(dia==1)
        {
            amanha=dia+1;
            mesamanha=mes;
            ontem=31;
            mesontem=12;
            anoontem=ano-1;
            anoamanha=ano;
        }
        else if(dia>1 && dia<31)
        {
            amanha=dia+1;
            mesamanha=mes;
            ontem=dia-1;
            mesontem=mes;
            anoontem=ano;
            anoamanha=ano;
        }
    }
    else if(mes==12)
    {
        if(dia==31)
        {
            amanha=1;
            mesamanha=1;
            ontem=dia-1;
            mesontem=mes;
            anoontem=ano;
            anoamanha=ano+1;
        }
        else if(dia==1)
        {
            amanha=dia+1;
            mesamanha=mes;
            ontem=30;
            mesontem=mes-1;
            anoontem=ano;
            anoamanha=ano;
        }
        else if(dia>1 && dia<31)
        {
            amanha=dia+1;
            mesamanha=mes;
            ontem=dia-1;
            mesontem=mes;
            anoontem=ano;
            anoamanha=ano;
        }
    }
    else if(mes==2)
    {
        if(dia==28)
        {
            amanha=1;
            mesamanha=mes+1;
            ontem=dia-1;
            mesontem=mes;
            anoontem=ano;
            anoamanha=ano;
        }
        else if(dia==1)
        {
            amanha=dia+1;
            mesamanha=mes;
            ontem=31;
            mesontem=mes-1;
            anoontem=ano;
            anoamanha=ano;
        }
        else if(dia>1 && dia<28)
        {
            amanha=dia+1;
            mesamanha=mes;
            ontem=dia-1;
            mesontem=mes;
            anoontem=ano;
            anoamanha=ano;
        }
    }
    else if(mes==3)
    {
        if(dia==31)
        {
            amanha=1;
            mesamanha=mes+1;
            ontem=dia-1;
            mesontem=mes;
            anoontem=ano;
            anoamanha=ano;
        }
        else if(dia==1)
        {
            amanha=dia+1;
            mesamanha=mes;
            ontem=28;
            mesontem=mes-1;
            anoontem=ano;
            anoamanha=ano;
        }
        else if(dia>1 && dia<31)
        {
            amanha=dia+1;
            mesamanha=mes;
            ontem=dia-1;
            mesontem=mes;
            anoontem=ano;
            anoamanha=ano;
        }
    }
    return data;
}
int main()
{
    scanf("%d/%d/%d", &dia, &mes, &ano);
}
