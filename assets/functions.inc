<?PHP
  #------------------ error ó�� �Լ� --------------------#
  function error( $msg )
  {
    echo("
    <script language=\"javascript\">
      alert( \"$msg\" );
      history.back();
    </script>" );
  }
  
  #---------------- forwarding ó�� �Լ� ------------------#
  function forward( $url )
  {
    header( "Location:".$url );
    //echo( "<meta http-equiv='Refresh' content='0'; URL=list.html" );
  }

  #--------------- ��ũ�� ����� �ִ� �Լ� ------------------#
  function dest_url( $link, $page, $uid=NULL )
  {
      GLOBAL $kind;
      GLOBAL $key;

      $link .= "?page=$page";
      if ( $uid )
        $link .= "&uid=$uid";
      if ( $key )
        $link .= "&kind=$kind&key=$key";
      return $link;
  }

?>