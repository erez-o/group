/** @name Group3
 *  Description of group 3. 
 */
///@{
/** Function 2 in group 3. Details. */
void func2InGroup2() {}
/** Function 1 in group 3. Details. */
void func1InGroup2() {}
///@}

void funcNotInGroup1() {}
/** Function 1 in group 3. Details. */
void funcNotInGroup2() {}

////////////////////////////////////////////////////////////////////////////////
//// Group_1
////////////////////////////////////////////////////////////////////////////////

/** @name Group5
 *  Description of group 5. 
 */
///@{

/* An entity identifier. */
typedef uint64_t ecs_entity_t;

/* A vector containing component identifiers used to describe an entity type. */
typedef const ecs_vector_t* ecs_type_t;

/* Array of entity ids that, other than a type, can live on the stack */
typedef struct ecs_entities_t {
    ecs_entity_t *array;
    int32_t count;
} ecs_entities_t;

/** Action callback for systems and triggers */
typedef void (*ecs_iter_action_t)(
    ecs_iter_t *data);

/** Compare callback used for sorting */
typedef int (*ecs_compare_action_t)(
    ecs_entity_t e1,
    void *ptr1,
    ecs_entity_t e2,
    void *ptr2);    

/** Compare callback used for sorting */
typedef int32_t (*ecs_rank_type_action_t)(
    ecs_world_t *world,
    ecs_entity_t rank_component,
    ecs_type_t type);

/** Initialization action for modules */
typedef void (*ecs_module_action_t)(
    ecs_world_t *world,
    int flags);    

///@}
