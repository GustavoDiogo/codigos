<?php
    
function arraytotalpercent($n,$array){
    $positive;$negative;$zero;
    for($i=0;$i<$n;$i++){        
         if($array[$i]>0){
            $positive++; 
         }
         if($array[$i]<0){
            $negative++;          
         }
         if($array[$i]==0){           
            $zero++;            
         }
    }
    printf("%f\n",$positive/$n);
    printf("%f\n",$negative/$n);
    printf("%f\n",$zero/$n);
}

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$n);
$arr_temp = fgets($handle);
$arr = explode(" ",$arr_temp);
array_walk($arr,'intval');

arraytotalpercent($n,$arr);

?>
