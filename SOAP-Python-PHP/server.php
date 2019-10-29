<?php

$options = array(
    'uri' => 'http://localhost:8080/server.php'
);
$server = new SoapServer(null, $options);

class MinhaInterfaceSoap
{
    public function somar($valor1, $valor2)
    {
        return $valor1 + $valor2;
    }
    
    public function subtrair($valor1, $valor2)
    {
        return $valor1 - $valor2;
    }
    
    public function multiplicar($valor1, $valor2)
    {
        return $valor1 * $valor2;
    }
    
    public function dividir($valor1, $valor2)
    {
        return $valor1 / $valor2;
    }
}

// $server->setClass('MinhaInterfaceSoap');
$server->setObject(new MinhaInterfaceSoap());

$server->handle();
?>
