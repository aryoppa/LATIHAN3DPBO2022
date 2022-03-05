<?php

class Disk
{
    private $type = "";
    private $capacity = 0;
    private $price = 0;

    public function __construct($type = "", $capacity = 0, $price = 0)
    {
        $this->type = $type;
        $this->capacity = $capacity;
        $this->price = $price;
    }

    public function setType($n = "")
    {
        $this->type = $n;
    }
    public function getType()
    {
        return $this->type;
    }

    public function setCapacity($x = 0)
    {
        $this->capacity = $x;
    }
    public function getCapacity()
    {
        return $this->capacity;
    }

    public function setPrice($y = 0)
    {
        $this->price = $y;
    }
    public function getPrice()
    {
        return $this->price;
    }

    public function __destruct(){}
}

?>