<?php
    
function matrixdif($n,$array){  
    $primary = 0;$secondary = 0;
    for($i=0;$i<$n;$i++){
        for($j=0;$j<$n;$j++){
         if($i==$j){
             $primary += $array[$i][$j];             
         }
         if($i + $j == $n -1){
             $secondary += $array[$i][$j];              
         }
        }
    }
    $total = abs($primary -$secondary);
    printf($total);    
   
}

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$n);
$a = array();
for($a_i = 0; $a_i < $n; $a_i++) {
   $a_temp = fgets($handle);
   $a[] = explode(" ",$a_temp);
  array_walk($a[$a_i],'intval');
}
matrixdif($n,$a);

?>
