<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE-Edge">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title>e-lerning</title>

<!-- fonts -->
<link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Poppins:ital,wght@0,100;0,200;0,300;0,400;0,500;0,600;0,700;0,800;0,900;1,100;1,200;1,300;1,400;1,500;1,600;1,700;1,800;1,900&display=swap" rel="stylesheet">

<!-- feather icon -->
<script src="https://unpkg.com/feather-icons"></script>


<!-- my stlye -->
	<link rel="stylesheet" href="septi.css">
</head>
<body>

<!-- navbar start -->
<nav class="navbar">
	<a href="#" class="navbar-logo"><span>Ayo Belajar</span> Dengan Kami.</a>

	<div class="navbar-nav">
		<a href="#home">Rumah</a>
		<a href="#about">Isi Materi</a>
<!-- 		<a href="#konten">Konten</a> -->
		<a href="#kontak">Kontak Kami</a>
	</div>

	<div class="navbar-extra">
<!-- 	<a href="#" id="search-button"><i data-feather="search"></i></a> -->
	<a href="#" id="Hamburger-menu"><i data-feather="menu"></i></a>
	</div>
</nav>
<!-- navbar end -->

<!-- sesi hero action -->
<section class="hero" id="home">
	<main class="konten">
		<h1><span>Mari Kita Belajar</span></h1>
		<p>Selamat datang di Website saya, sebuah platform yang didedikasikan untuk mengeksplorasi, memahami, dan merayakan keberagaman agama di seluruh dunia. Di sini, kami percaya bahwa agama bukanlah hanya sekadar seperangkat kepercayaan, tetapi juga sebuah jalan untuk menjalin kedamaian, menginspirasi kebaikan, dan memperkaya pemahaman kita tentang makna hidup.</p>
		<a href="#about" class="cta">Mulai Pembelajaran</a>
	</main>
</section>

<!-- about section -->
<section id="about" class="about">
	<h2><span>Materi</span> saya</h2>

	<div class="row">
		<div class="about-img">
			<img src="sujud.jpg" alt="Tentang Kami">
		</div>
		<div class="konten">
			<h3>Materi Agama</h3>
			<p>1. Agama merupakan bagian integral dari kehidupan manusia sepanjang sejarah peradaban. Meskipun pandangan dan praktiknya beragam di berbagai budaya, agama telah memberikan arahan moral, sistem nilai, dan landasan spiritual bagi individu dan komunitas.</p>

			<p>2. Pemberian Makna dan Tujuan: Agama memberikan jawaban atas pertanyaan filosofis tentang asal-usul, tujuan, dan makna kehidupan manusia. Melalui mitos, doktrin, dan praktik keagamaan, individu menemukan makna dalam pengalaman hidup mereka.</p>

			<p>3. Penghiburan dan Ketenangan Batin: Dalam saat-saat kesulitan, agama memberikan penghiburan dan harapan kepada individu. Keyakinan akan adanya kekuatan yang lebih besar atau kehidupan setelah kematian memberikan ketenangan batin dan kenyamanan dalam menghadapi tantangan hidup.</p>
		</div>
	</div>

	<div class="row">
		<div class="about-img">
			<img src="madinah.jpg" alt="Tentang Kami">
		</div>
		<div class="konten">
			<h3>materi sejarah</h3>
			<p>1. Kehidupan Nabi Muhammad dan Periode Awal Islam
			    Kelahiran Nabi Muhammad: Nabi Muhammad lahir di Mekah pada sekitar tahun 570 Masehi.
			    Kenabian: Pada usia 40 tahun, Nabi Muhammad menerima wahyu pertamanya dari Allah (Tuhan dalam Islam) melalui malaikat Jibril (Gabriel).
			    Pengajaran Islam: Nabi Muhammad mulai menyebarkan ajaran Islam di Mekah, mengajarkan tauhid (kepercayaan pada satu Tuhan), etika, dan keadilan sosial.
			    Hijrah: Pada tahun 622 M, Nabi Muhammad dan pengikutnya hijrah (migrasi) dari Mekah ke Madinah untuk melarikan diri dari persekusi. Peristiwa ini menjadi titik awal penanggalan Islam.</p>
			<p>2. Perkembangan Islam di Madinah
			    Pendirian Masyarakat Islam: Di Madinah, Nabi Muhammad mendirikan masyarakat Muslim yang terorganisir, mengatur hukum dan urusan sosial melalui konstitusi Madinah.
			    Perang dan Penyebaran Islam: Muslim di Madinah menghadapi pertempuran melawan suku-suku pagan di sekitarnya dan kemudian melawan Mekah dalam Perang Hunain dan Penaklukan Mekah. Islam mulai menyebar luas di Jazirah Arab.</p>
			<p>3. Periode Kekhilafahan
			    Kematian Nabi Muhammad: Nabi Muhammad wafat pada tahun 632 M, meninggalkan kepemimpinan kepada para sahabatnya.
			    Pemerintahan Abu Bakar: Abu Bakar, sahabat terdekat Nabi Muhammad, menjadi khalifah pertama (pemimpin) umat Islam.
			    Perang Riddah dan Penaklukan: Pada masa kepemimpinan Abu Bakar dan Umar bin Khattab, Kekhalifahan Islam berhasil menaklukkan banyak wilayah di Timur Tengah, Afrika Utara, dan Persia.</p>
		</div>
	</div>

</section>
<!-- about end -->

<!-- sesi hero selesai -->

<!-- kontak section -->
<section class="kontak" id="kontak">
	<h2>Kontak<span> Kami.</span></h2>
		<p>kontak kami jika ada masalah
		hubungi email ini aditseptiawan10.gmail.com</p>


		<div class="row">
			<img src="quran.jpg" alt="kontak" class="gambar">

			<form>
				<div class="input-group">
					<i data-feather=user></i>
					<input type="text" placeholder="nama">
				</div>
				<div class="input-group">
					<i data-feather=mail></i>
					<input type="text" placeholder="email">
				</div>
				<div class="input-group">
					<i data-feather=phone></i>
					<input type="text" placeholder="nomer tlp">
				</div>
				<button type="submit" class="btn">kirim pesan</button>
			</form>


		</div>
</section>

<!-- kontak sesion selesai -->

<!-- footer -->
<footer>
	<div class="sosial">
		<a href="#"><i data-feather="instagram"></i></a>
	</div>

	<div class="link">
		<a href="#home">rumah</a>
		<a href="#about">isi materi</a>
		<a href="#kontak">Kontak kami</a>
	</div>

	<div class="credit">
		<p> created by <a href="">Adit septiawan</a>. | &copy; 2024.</p>
	</div>

</footer>
<!-- footer selesai -->



<!-- feather icon -->
<script>
      feather.replace();
    </script>


    <!-- my  javascript -->
    <script src="js/script.js"></script>
</body>
</html>
