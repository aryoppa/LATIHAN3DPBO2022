<?php

class RAM
{
    private $capacity = 0;
    private $price = 0;

    public function __construct($capacity = 0, $price = 0)
    {
        $this->capacity = $capacity;
        $this->price = $price;
    }

    public function setCapacity($n = 0)
    {
        $this->capacity = $n;
    }
    public function getCapacity()
    {
        return $this->capacity;
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