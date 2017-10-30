Zanke
*****

Pri zanki "while" se bomo držali smernic omenjenih v razdelku Pogojni stavek in operatorji. 

Tudi pri zanki while je najlepši zapis 

.. code-block:: c
    :linenos:
    
    while (a < b)
    {
        a += 5;
    }

Vsi drugi zapisi zanke while so manj berljivi in tudi težji za iskanje napak. 

Kot tudi pogojni stavek, lahko zanko while zapišemo v eni vrstici, kar pa ni najprimernejši način, kljub temu da je delujoč.

Enako velja tudi za do - while zanko, katere najlepši zapis je

.. code-block:: c
    :linenos:
    
    do
    {
        a += 5;
    } while (a < b);
    
Pri zanki do - while je izjemno pomembno, da jo zaključimo s podpičjem, kar je pri zanki while napaka, ki zanko prekine pred prvo iteracijo in nadaljnjo kodo izvede le enkrat.

Zanka for je kot že večkrat omenjeno, modificirana zanka while. Zato tudi pri zanki for uporabljamo enako postavljanje oklepajev. Izjemno pomembno je tudi, da za vsakim delom delom znotraj zanke for pišemo presledek za podpičjem. Tako je na primer zapis

.. code-block:: c
    :linenos:
    
    for (int i = 0; i < 10; i++)
    {
    
    }
    
veliko primernejši od zapisa

.. code-block:: c
    :linenos:
    
    for(int i= 0;i< 10; i   ++)
    {
    
    }
    
Nasvet v primeru težav z zanko for: Po standardu C89 ni bilo dovoljeno pisati "for (int i ..." in je bilo potrebno števec "i" deklarirati pred zanko. Če naletite na takšno težavo, preverite nastavitve prevajalnika in/ali povprašate demonstratorja, kaj lahko storite. Na računalniškem praktikumu se držimo standarda C99.
        
