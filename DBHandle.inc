<?php
//DBHandle

	class DBHandle {
		private $db;
		private $req;

		public function __construct($serveur="localhost", $db="MVCMarket", $user="root", $pwd="root") {

			$this->db = new PDO("mysql:host=$serveur; dbname=$db", $user, $pwd);
			$this->req = $this->db->prepare("SELECT * from produits");

		}

		public function getDataDb() {
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