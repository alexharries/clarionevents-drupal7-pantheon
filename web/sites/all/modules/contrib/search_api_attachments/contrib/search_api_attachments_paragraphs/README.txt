Search API Attachments Paragraphs

This contrib module extends the work of search_api_attachments by indexing
the files that belong to a paragraphs item referenced by a paragraphs field in
the parent entity index.


Example:
You have a node that has 2 fields :

 field_documents: a File field.
 paragraphs: a paragraphs reference field referencing a paragraphs item with
 the following fields on it:
   field_referenced_documents1: a File field.
   field_referenced_documents2: a File field.

To index the field_documents content, you don't need this submodule, just use
the search_api_attachments module.
To index field_referenced_documents1 and field_referenced_documents2 content
in our node index, you can use this submodule :)
