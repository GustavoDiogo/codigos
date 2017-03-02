<?php
    
function arraysum($n,$array){
    //for($i = 0;$i<$n;$i++){
    $total;
    if($n == -1){
        return $total;
    }
    else{
        $total = $total + $array[$n];
        $n = $n - 1;
        return arraysum($n,$array) + $total;
    }
        //$total += $array[$i];   
        //}
        // printf("%d", $total);
}

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$n);
$arr_temp = fgets($handle);
$arr = explode(" ",$arr_temp);
array_walk($arr,'intval');
$result = arraysum($n,$arr);
printf($result);

?>
