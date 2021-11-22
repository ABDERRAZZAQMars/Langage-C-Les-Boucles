<?xml version="1.0" encoding="UTF-8"?>
<Algo>
    <description texte="" courant="i PREND_LA_VALEUR ++"/>
    <extension extnom="inactif"/>
    <fonction fctcode="" fctetat="inactif"/>
    <F2 F2defaut="" F2para="" F2etat="inactif" F2lignes=""/>
    <repere repcode="-10#10#-10#10#2#2" repetat="inactif"/>
    <param epaisseurPoint="2" nbDecimales="8" maxBoucle="500000" totalBoucles="5000000" totalAffichages="1000" epaisseurLigne="2" arrondiAuto="vrai"/>
    <item code="200#declarationfonctions" algoitem="FONCTIONS_UTILISEES"/>
    <item code="100#declarationsvariables" algoitem="VARIABLES">
        <item code="1#NOMBRE#nb" algoitem="nb EST_DU_TYPE NOMBRE"/>
        <item code="1#NOMBRE#i" algoitem="i EST_DU_TYPE NOMBRE"/>
        <item code="1#NOMBRE#multiplication" algoitem="multiplication EST_DU_TYPE NOMBRE"/>
        <item code="1#CHAINE#Tb" algoitem="Tb EST_DU_TYPE CHAINE"/>
    </item>
    <item code="101#debutalgo" algoitem="DEBUT_ALGORITHME">
        <item code="4#Entrer Un Nombre#1" algoitem="AFFICHER &quot;Entrer Un Nombre&quot;"/>
        <item code="2#nb#pasliste" algoitem="LIRE nb"/>
        <item code="5#i#1#pasliste" algoitem="i PREND_LA_VALEUR 1"/>
        <item code="5#Tb#10#pasliste" algoitem="Tb PREND_LA_VALEUR 10"/>
        <item code="15#i&lt;=10" algoitem="TANT_QUE (i&lt;=10) FAIRE">
            <item code="16#debuttantque" algoitem="DEBUT_TANT_QUE"/>
            <item code="20#multiplication=nb*i#1" algoitem="AFFICHERCALCUL multiplication=nb*i"/>
            <item code="20#Tb[i]=multiplication#0" algoitem="AFFICHERCALCUL Tb[i]=multiplication"/>
            <item code="3#multiplication#0#pasliste" algoitem="AFFICHER multiplication"/>
            <item code="5#i#++#pasliste" algoitem="i PREND_LA_VALEUR ++"/>
            <item code="17#fintantque" algoitem="FIN_TANT_QUE"/>
        </item>
    </item>
    <item code="102#finalgo" algoitem="FIN_ALGORITHME"/>
</Algo>
