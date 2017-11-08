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
        // Koda sodi sem
    }
    
veliko primernejši od zapisa

.. code-block:: c
    :linenos:
    
    for(int i= 0;i< 10; i   ++)
    {
 // In ne sem
    // Ali sem
                   // Ali morda sem
    }
    
Nasvet v primeru težav z zanko for: Po standardu C89 ni bilo dovoljeno pisati "for (int i ..." in je bilo potrebno števec "i" deklarirati pred zanko. Če naletite na takšno težavo, preverite nastavitve prevajalnika in/ali povprašate demonstratorja, kaj lahko storite. Na računalniškem praktikumu se držimo standarda C99.

Prav tako kot tudi pri pogojnem stavku, je zelo priporočljiva uporaba zavitih oklepajev (zadnji oklepaj je praviloma po zadnji vrstici zanke, prvi pa ali v isti vrstici kot `for` ali v svoji vrstici tik za `for`

Torej ali:

.. code-block:: c
    :linenos:
    
    for (int i = 0; i < 10; i++)
    {
    
    }
    
ali

.. code-block:: c
    :linenos:
    
    for (int i = 0; i < 10; i++) {
        
    }

Prav tako je skoraj obvezna uporaba zamikov znotraj zanke, saj s tem jasno nakažemo, kater del kode se izvaja znotraj nje. 
