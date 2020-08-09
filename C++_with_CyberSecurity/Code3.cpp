#include <stdio.h>
#include <stdlib.h>

typedef struct _LIST_ENTRY
{
	struct _LIST_ENTRY* Flink;
	struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY;

typedef struct
{
	LIST_ENTRY ListLinks;
	int UniqueID;
	char* NameValue;
} DATA_ENTRY, *PDATA_ENTRY;

void EnumListEntriesForward(PLIST_ENTRY listHead)
{
	int counter = 0;
	PLIST_ENTRY entry = listHead->Flink; // ->

	while (entry != listHead)
	{
		++counter;
		printf("Entry %d: Name: %s\n", counter, ((PDATA_ENTRY)entry)->NameValue);

		entry = entry->Flink;
	}

	printf("** Counted %d elements\n\n", counter);
}

void InsertTailList(PLIST_ENTRY listHead, PLIST_ENTRY entryToInsert)
{
	PLIST_ENTRY lastEntry = listHead->Blink;

	entryToInsert->Blink = lastEntry;
	entryToInsert->Flink = listHead;

	lastEntry->Flink = entryToInsert;
	listHead->Blink = entryToInsert;
}

int main()
{
	LIST_ENTRY ActiveDataListHead;

	/* Initialize the head */
	ActiveDataListHead.Flink = &ActiveDataListHead;
	ActiveDataListHead.Blink = &ActiveDataListHead;

	EnumListEntriesForward(&ActiveDataListHead);

	PDATA_ENTRY pdataEntry = (PDATA_ENTRY)malloc(sizeof(DATA_ENTRY));
	pdataEntry->NameValue = (char*)"First entry";
	pdataEntry->UniqueID = rand();

	InsertTailList(&ActiveDataListHead, (PLIST_ENTRY)pdataEntry);

	EnumListEntriesForward(&ActiveDataListHead);

	pdataEntry = (PDATA_ENTRY)malloc(sizeof(DATA_ENTRY));
	pdataEntry->NameValue = (char*)"Second entry";

	InsertTailList(&ActiveDataListHead, (PLIST_ENTRY)pdataEntry);

	EnumListEntriesForward(&ActiveDataListHead);
}
