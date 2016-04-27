Z_SellArray = Z_SellArray + Z_SellableArray;
Z_SellableArray = [];
call Z_clearLists;
call Z_fillSellList;
call Z_fillSellingList;
call Z_calcPrice;