Osnove
******

V kodi najprej vključimo vse knjižnice, ki jih bomo uporabili. Če kasneje ugotovimo, da smo pozabili vključiti kakšno zaglavno datoteko ("header file"), jo dodamo na konec vseh razdelka, kjer vključujemo datoteke. Prav tako poskrbimo, da nimamo vključenih odvečnih zaglavnih datotek, saj s tem podaljšujemo čas prevajanja.

Primer:

.. code-block:: c
    :linenos:
    
    #include <stdio.h> // Standard input-output header
    #include <math.h> // Ta zaglavna datoteka v tem programu ni potrebna
    
    int main(void)
    {
        printf("Hello World!\n");
        return 0;
    }
    

Prav tako je zelo pomembno, da naša funckija main na koncu vrne rezultat, saj v nasprotnem primeru dosežemo nedefinirano obnašanje. S tem ko vrnemo na koncu 0, sporočimo, da se je program uspešno zaključil. 

Pri pisanju programske kode moramo tudi paziti, da je koda berljiva. Berljivost dosežemo s pravilno uporabo zamikov, presledkov in novih vrstic. 

Primer slabe prakse:

.. code-block:: c
    :linenos:
    
    #include <stdio.h>
    #include<math.h> 
    /* Program se bo uspešno prevedel, je pa lepo, 
       ce pred potjo do zaglavne datoteke napisemo presledek.*/
    
    int main(void)
    {int    x= 1; 
			/* Celotna vrstica z izjemo { bi morala biti v novi vrstici, 
			   zamaknjena za 4 presledke ali en tabulator. Prav tako se 
			   je treba drzati pravila enega presledka (int x = 1;)*/
					 
        printf("Dve besedi\nSe tri besede\nIn se tri"); 
        // Vsaka vrstica izpisa naj bo izpisana posebej. 
        
        printf("%d",pow(x,10)); 
        // Po vsakem delu kode naj bo presledek, zaradi vecje berljivosti
        
    return 0;} 
    /* return 0; naj bo vedno v svoji vrstici tik pred koncem programa 
       na istem zamiku, kot je cel program. */
    
Popravljen primer:

.. code-block:: c
    :linenos:
    
    #include <stdio.h>
    #include <math.h>
    
    int main(void)
    {
        int x = 1; 
        /* Po vsakem misljensko locenem bloku naj bo prazna vrstica. 
           Ce je preskok se vecji, se lahko uporabi vec praznih vrstic*/
        
        printf("Dve besedi\n");
        printf("Se tri besede\n");
        printf("In se tri\n");
        
        printf("%d", pow(x, 10));
        return 0;
    }
    
Iz varnostnih razlogov tudi ne puščamo spremenljivk predolgo nedefiniranih. Zato jih deklariramo kar se le da pozno, saj se lahko pripeti, da se zmotimo, in jo poizkusimo uporabiti že prej, s tem pa ponovno ustvarimo nepredvideno obnašanje programa. Poizkušamo se tudi izogibati deklaraciji več spremenljivk v eni vrstici

Primer:

.. code-block:: c
    :linenos:
    
    #include <stdio.h>
    
    int main(void)
    {
        int x, y, z; 
        // Bolje je deklarirati vsako posebej. Prav tako naj bodo imena spremenljivk pomenljiva
        
        printf("Vnesi x: ");
        scanf("%d", &x);
        printf("Nova vrednost x je %d.\n", x);
        
        printf("Vnesi y: ");
        scanf("%d", &y); 
        printf("Nova vrednost y je %d.\n", y);
        
        printf("Razlika med x in y je %d.\n", z); 
        /* z naj bi bil razlika, ki smo jo pozabili definirati. 
           Ce z ne bi definirali na vrhu, ampak tik pred izpisom, 
           bi to opazili.*/
        
        return 0;
    }


        
