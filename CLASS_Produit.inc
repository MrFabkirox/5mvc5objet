<?php
//Produit

	class Produit {
		private $id;
		private $Designation;
		private $prix;

		function getId() {
			return $this->id;
		}

		function getDesignation() {
			return $this->Designation;
		}

		function getPrix() {
			return $this->prix;
		}
	}

	echo('!Produit!');

?>