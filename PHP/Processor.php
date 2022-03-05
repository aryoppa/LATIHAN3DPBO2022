<?php

class Processor
{
    private $name = "";
    private $price = 0;

    public function __construct($name = "", $price = 0)
    {
        $this->name = $name;
        $this->price = $price;
    }

    public function setName($n = "")
    {
        $this->name = $n;
    }
    public function getName()
    {
        return $this->name;
    }

    public function setPrice($x = 0)
    {
        $this->price = $x;
    }
    public function getPrice()
    {
        return $this->price;
    }

    public function __destruct(){}
}

?>