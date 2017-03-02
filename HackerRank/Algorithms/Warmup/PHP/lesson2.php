<?php
    
function somadordearray($n, $x){
    $total;
    if($n == -1){        
        return $total;        
    }
    else{       
        $total = $total + $x[$n];    
        $n = $n - 1;
        return somadordearray($n,$x) + $total;        
    }
}

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$n);

$arr_temp = fgets($handle);
$arr = explode(" ",$arr_temp);
$somador = somadordearray($n,$arr);
printf($somador);

array_walk($arr,'intval');

?>
