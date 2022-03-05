<?php

include "Processor.php";
include "Disk.php";
include "RAM.php";

class PC
{

    private $Pobj;
    private $Dobj;
    private $Robj;
    private $total;
    private $name;
    
    public function __construct()
    {
        $this->Pobj = new Processor();
        $this->Dobj = new Disk();
        $this->Robj = new RAM();
        $this->total = 0;
        $this->name = "";
    }

    public function setName($name = "")
    {
        $this->name = $name;
    }
    public function getName()
    {
        return $this->name;
    }

    public function setProcessor($Pobj)
    {
        $this->Pobj = $Pobj;
    }
    public function getProcessor()
    {
        return $this->Pobj;
    }

    public function setDisk($Dobj)
    {
        $this->Dobj = $Dobj;
    }
    public function getDisk()
    {
        return $this->Dobj;
    }

    public function setRAM($Robj)
    {
        $this->Robj = $Robj;
    }
    public function getRAM()
    {
        return $this->Robj;
    }

    public function getTotal($t1, $t2, $t3)
    {
        return $this->total = $t1 + $t2 + $t3;
    }

    public function __destruct(){}
}

?>