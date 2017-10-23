Pogojni stavek in operatorji
****************************

V programskem jeziku C obstajata dva osnovna zapisa pogojev. Kot trojni operator ali kot pogojni stavek.

Trojni operator je priročen način, kako doseči preprosto obnašanje programa pod določenimi pogoji. Uporabljamo ga, ko želimo nekaj postoriti v eni vrstici, za daljše razdelke kode pa se mu izogibamo. 

Primer dobre uporabe:

.. code-block:: c
    :linenos:
    
    int manjsi = (stevilo1 > stevilo2) ? stevilo2 : stevilo1;
    
Trojni operator lahko beremo kot "če velja pogoj, potem naredi prvi del, drugače drugi", kjer je vsebina pred ? pogoj, vsebina med ? in : prvi del in vsebina po : drugi del.

Primer ne tako dobre uporabe:

.. code-block:: c
    :linenos:
    
    (stevilo1 > stevilo2) ? printf("Prvo stevilo je vecje od drugega.\n") : printf("Drugo stevilo je vecje od prvega.\n");
    
Da se to ne bi dogajalo, je dogovor, da nobena vrstica programa ne sme biti daljša od 100 znakov (vključno s presledki). Trojni operator torej uporabljamo le, ko želimo narediti operacijo, ki ne zahteva dolge kode. Načeloma operator uporabimo le za določanje vrednosti spremenljivk (ali kot bomo kasneje videli za rezultat funkcije).

Poleg trojnega operatorja, poznamo še nekaj drugih operatorjev, ki so našteti v gradivih. Kljub temu da prevajalnik razume tudi zapise "and", "or", "nor", "xor" itn. se takšnim zapisom (in zamenjavam operatorjev) na široko izogibamo. 

Logične operatorje bomo potrebovali predvsem pri gnezdenju pogojev znotraj enega pogojnega stavka. Tudi tu moramo paziti, da dolžnina vrstice (razen izjemoma) ne preseže 100 znakov. Ker pa se lahko pripeti, da znotraj enega pogojnega stavka preverjamo mnogo pogojev, lahko pogoje zapišemo v več vrsticah, kjer pazimo, da jasno označimo prioriteto pogojev.

Primer preproste uporabe pogojnega stavka:

.. code-block:: c
    :linenos:
    
    if (stevilo1 > stevilo2)
    {
        printf("Prvo stevilo je vecje od drugega.\n");
    }
    else
    {
        printf("Drugo stevilo je vecje od prvega");
    }
    
Kot je že omenjeno zgoraj, lahko pogoje gnezdimo znotraj zanke. 

Primer:

.. code-block:: c
    :linenos:
    
    if ((a > b) && (a > c)) // Ce je a vecji od b in a vecji od c
    {
        printf("Stevilo a je najvecje med vsemi.\n");
    }
    
Prav tako je nujno potrebno označevati vrstni red preverjanja pogojev z oklepaji, saj si le na tak način pomagamo, da poiščemo morebitno napako v kodi.

Primer slabe prakse:

.. code-block:: c
    :linenos:
    
    if ((a > b) && (a > c) || (a > d))
    {
        printf("Kaj bo prej preverjeno?\n");
    }
    
    
Ker se lahko pripeti, da imamo mnogo pogojev znotraj enega pogojnega stavka in le ti zasedajo več kot 100 znakov, se lahko poslužimo metode "razbijanja vrstice". Pri tem velja pravilo, da morajo biti vrstice razbite logično in tudi jasno označeno.

Primer:

.. code-block:: c
    :linenos:
    
    if ( ( (stevilo1 > stevilo2) || (stevilo2 > stevilo3) ) &&
         ( (stevilo3 > stevilo4) || (stevilo4 > stevilo5) ) )
    {
        // Naredi nekaj
    }
    
V tem primeru smo jasno označili, da morata biti izpolnjena ali prvi ali drug pogoj IN tretji ali četrti pogoj.

Ko tako razbijemo vrstice nato tudi zaviti oklepaj postavimo na mesto, kejr bi bil, če vrstic ne bi razbil. To nam pomaga pri logičnem razmišljanju in vmeščanju pogojnega stavka v kontekts.

Kljub temu da v programskem jeziku C deluje tudi t.i. inline pogojni stavek, se mu navadno izogibamo. Uporabljanje zavitih oklepajev nam omogoča popravljanje programske kode brez težav pri dodajanju dejanj znotraj pogoja. 

Zato namesto

.. code-block:: c
    :linenos:
    
    if (a > b)
        printf("A vecje od B.\n");

ali

.. code-block:: c
    :linenos:
    
    if (a > b) printf("A vecje od B.\n");
    
pišemo raje

.. code-block:: c
    :linenos:
    
    if (a > b)
    {
        printf("A vecje od B.\n");
    }


