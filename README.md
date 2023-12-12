# c_lang
# Customer COT Dim

### Entity Description
Customer COT Dimension stores the Customer Class of Trade data from the MDM Customer system.

**Subject Area:** MDM<br>
**Table Name:** customer_cot_dim<br>
**Detailed Description:** This dimension stores the valid Customer Class of Trade data from the MDM system.
Class of Trade is effective dated, thus additional date columns present here.

**Primary Key(s):** `customer_cot_id`, `ver_num`


**Dimensionality:**
   - Customer
   - User


**Dependencies:**
   - Plaform


### Columns

| Column Name | Data Type | Business Name | Description |
| :--- | :--- | :--- | :--- |
| customer_cot_id | decimal(22,0) |  | Customer class of trade Identifier<br>(Primary Key) |
| ver_num | decimal(22,0) |  | Canonical record version number<br>(Primary Key) |
| customer_cot_code | string |  | Customer Class Of Trade code |
| customer_cot_desc | string |  | Description related to class of trade of customer |
| customer_id | decimal(22,0) |  |  Customer Identifier (FK:CUSTOMER_DIM) |
| date_created | timestamp |  | The date when the record was created |
| date_updated | timestamp |  | The date when the record was updated |
| effective_end_date | timestamp |  | The customer and class of trade association expiration date |
| effective_start_date | timestamp |  | The customer and class of trade association effective date |
| latest_flag | string |  |Indicates if this is the latest version or not|
| record_deleted_flag | string |  | Record deleted flag<br>To indicate whether record is deleted or not|
| record_valid_error | string |  | Record valid error<br>Error text if availbale or null |
| record_valid_flag | string |  | Record valid flag<br>Used to indicate if table record is valid  |
| src_sys_date_updated | timestamp |  | Last date updated of the record from the transactional system |
| src_sys_end_ver_num | decimal(22,0) |  | Source system database end version number of the record |
| src_sys_id | decimal(22,0) | | Source System Identifier.<br>Identifier which is used to link the record back to Originating data|
| src_sys_rec_status | string |  | To indicate status of the record in the source<br>e.g., Activated, Deactivated, Suspended etc |
| src_sys_type | string |  | Source system type of the record<br>(pbN or pbF)|
| src_sys_ver_num | decimal(22,0) | | Source system version number <br> Used to identify the link between source record and canonical record |
| updated_user_id | decimal(22,0) |  | Id of the person/user who updated the record in source.<br>(FK:USER_DIM)|
| ver_end_date | timestamp |  | Canonical version end date<br> no gaps in history allowed|
| ver_start_date | timestamp |  | Canonical version Start date<br> no gaps in history allowed|

