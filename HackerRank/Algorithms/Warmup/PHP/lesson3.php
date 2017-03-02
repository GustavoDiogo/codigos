<?php
   
function mostvaluablearray($a,$b){
    $atotal;
    $btotal;
    for($i = 0; $i <sizeof($a);$i++){
        if($a[$i] > $b[$i]){
            $atotal++;    
        }    
        else if($a[$i] < $b[$i]){
            $btotal++; 
         }
    }
     printf("%d %d",$atotal,$btotal);     
    
}
 
$handle = fopen ("php://stdin","r");
fscanf($handle,"%d %d %d",$a0,$a1,$a2);
$a = [$a0, $a1, $a2];
fscanf($handle,"%d %d %d",$b0,$b1,$b2);
$b = [$b0, $b1, $b2];
mostvaluablearray($a,$b);
 
 
?>