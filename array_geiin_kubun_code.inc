<?

if(!$con=mysql_connect("localhost",$user,$password)){
echo "接続失敗";
exit;
}


$row = mysql_select_db("ips",$con);


if(!$res = mysql_query("SELECT コード, 原因区分名 FROM 部品工程原因区分マスタ ORDER BY コード")){
echo "SQL失敗569";
exit;
}  

//$array_geiin_kubun_code[] = "";

//$array_geiin_kubun_mei[] = "";

while($row = mysql_fetch_array($res)){


$array_geiin_kubun_code[] = $row['コード'];
$array_geiin_kubun_mei[] = $row['原因区分名'];

}



?>
