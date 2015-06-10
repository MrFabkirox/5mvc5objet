<?php
//DBHandle

	class DBHandle {
		private $db;
		private $req;

		public function __construct($Serveur="localhost", $db="MVCMarket", $user="root", $pwd="root") {

			$this->db = new PDO("mysql:host=$Serveur; dbname=$db", $user, $pwd);
			$this->req = $this->db->prepare("SELECT * FROM produits");

		}

		public function getData() {
			$res = array();

			$this->req->execute();
			while($prod = $this->req->fetchObject('Produit')) {
				$res[] = $prod;
			}
			return $res;

		}

	}

	echo('!DBHandle!');

?>