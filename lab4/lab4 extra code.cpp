//would not work on numbers over three digits or numbers with 0's
    int dimeAmount = coinAmount % (quarterAmount * quarterValue)/10;
    int nickelAmount = (coinAmount % (quarterAmount * quarterValue)) % (dimeAmount * dimeValue)/5;
    int pennyAmount = ((coinAmount % (quarterAmount * quarterValue)) % (dimeAmount * dimeValue)) % (nickelAmount * nickelValue);
   