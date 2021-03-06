<h2>Format Support</h2>
<p>In addition to this HTML interface, we also provide JSON format.</p>
<table>
    <tr><th>JSON</th>
        <td>Content-Type: text/json; charset=utf-8</td>
    </tr>
</table>

<h2>API Methods</h2>
<p>All parameters are sent as regular URL parameters.</p>


<h3>GET Categories</h3>
<p>RecTrac has both categories and types in the same table.
   A category is an entry in the Types table with CodeType of C.
</p>
<table>
    <tr><th>Purpose</th>
        <td>List all the top level categories in use.</td>
    </tr>
    <tr><th>url</th>
        <td><?= BASE_URL; ?>/types?CodeType=C</td>
    </tr>
</table>
<h4>Response</h4>
<table>
    <tr><th>Type</th>
        <td>The short code for this type.  This is used as the foreign key in the activities.</td>
    </tr>
    <tr><th>Descript</th>
        <td>The longer, human readable name for this type.</tr>
    <tr><th>CodeType</th>
        <td>Whether this is a "Type" or a "Category".  Types will have CodeType=T and categories
            will have CodeType=C
        </tr>
</table>


<h3>GET Types</h3>
<table>
    <tr><th>Purpose</th>
        <td>List all the types.  Optionally provide a category to filter the types.</td>
    </tr>
    <tr><th>url</th>
        <td><?= BASE_URL; ?>/types?category=TYPE</td>
    </tr>
</table>
<h4>Arguments</h4>
<table>
    <tr><th>category</th>
        <td>The "Type" code for a category.  This is the short code for the category.</td>
    </tr>
</table>

<h4>Response</h4>
<table>
    <tr><th>Type</th>
        <td>The short code for this type.  This is used as the foreign key in the activities.</td>
    </tr>
    <tr><th>Descript</th>
        <td>The longer, human readable name for this type.</tr>
    <tr><th>CodeType</th>
        <td>Whether this is a "Type" or a "Category".  Types will have CodeType=T and categories
            will have CodeType=C
        </tr>
</table>
