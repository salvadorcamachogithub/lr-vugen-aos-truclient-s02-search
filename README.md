Updated: 02.2025  
Script created by Salvador Camacho

This script was created with best practices, so it is more resilient, such as:
* Transaction naming
* No add cookies
* No third party
* One validation per transaction
* Think times at the end of each transaction to better simulate user behavior
* Main URL parametrized, Public AOS by default

This script does a search, then randomly selects a product from the search and then goes to it in transaction number 3, adds it to the cart, goes to checkout to then abandon the session
	
Runtime Settings were set to log only on errors and generate snapshot on errors, think times random from 15 seconds to 25 seconds

There is a Web - HTTP/HTML script that does the same steps

This script has 5 transactions:  
AOS-TruClient-S02-01 Access AOS URL  
AOS-TruClient-S02-02 Search  
AOS-TruClient-S02-03 Random Product  
AOS-TruClient-S02-04 Add To Cart  
AOS-TruClient-S02-05 Checkout