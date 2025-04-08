//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_1.inf");
	lr_start_transaction("AOS-TruClient-S02-01 Access AOS URL");
	truclient_step("2", "Navigate to AOS_URL", "snapshot=Action_2.inf");
	lr_end_transaction("AOS-TruClient-S02-01 Access AOS URL",0);
	truclient_step("3", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_3.inf");
	lr_start_transaction("AOS-TruClient-S02-02 Search");
	truclient_step("4", "Click on button (1) button", "snapshot=Action_4.inf");
	truclient_step("5", "Type hp in Search AdvantageOnlineSho... textbox", "snapshot=Action_5.inf");
	truclient_step("6", "Press key Enter on Search AdvantageOnlineSho... textbox", "snapshot=Action_6.inf");
	lr_end_transaction("AOS-TruClient-S02-02 Search",0);
	truclient_step("7", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_7.inf");
	lr_start_transaction("AOS-TruClient-S02-03 Random Product");
	truclient_step("8", "Click on Random Product label", "snapshot=Action_8.inf");
	lr_end_transaction("AOS-TruClient-S02-03 Random Product",0);
	truclient_step("9", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_9.inf");
	lr_start_transaction("AOS-TruClient-S02-04 Add To Cart");
	truclient_step("10", "Click on ADD TO CART button", "snapshot=Action_10.inf");
	lr_end_transaction("AOS-TruClient-S02-04 Add To Cart",0);
	truclient_step("11", "Wait Math.floor(Math.random() * (26- 15) + 15) seconds", "snapshot=Action_11.inf");
	lr_start_transaction("AOS-TruClient-S02-05 Checkout");
	truclient_step("14", "Click on CHECKOUT button", "snapshot=Action_14.inf");
	lr_end_transaction("AOS-TruClient-S02-05 Checkout",0);

	return 0;
}
