<?php

include "PC.php";

$Pobj = new Processor();
$Dobj = new Disk();
$Robj = new RAM();

$Pobj->setName("AMD");
$Pobj->setPrice(1500000);

$Dobj->setType("SSD");
$Dobj->setCapacity(1000);
$Dobj->setPrice(1500000);

$Robj->setCapacity(16);
$Robj->setPrice(1500000);

$PC = new PC();
$PC->setName("ASUS");


echo "============================"."<br/>";
echo "PC's Brand       : ".$PC->getName()."<br/>";
echo "Processor"."<br/>";
echo "  -Brand         : ".$Pobj->getName()."<br/>";
echo "  -Price         : IDR ".$Pobj->getPrice()."<br/>";
echo "Disk"."<br/>";
echo "  -Type          : ".$Dobj->getType()."<br/>";
echo "  -Capacity      : ".$Dobj->getCapacity()."<br/>";
echo "  -Price         : IDR ".$Dobj->getPrice()."<br/>";
echo "RAM"."<br/>";
echo "  -Capacity      : ".$Robj->getCapacity()."<br/>";
echo "  -Price         : IDR ".$Robj->getPrice()."<br/>";
echo "PC's Total Price : IDR ".$PC->getTotal($Pobj->getPrice(), $Dobj->getPrice(), $Robj->getPrice())."<br/>";
echo "============================"."<br/>";

?>