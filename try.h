

////////////////////////////////////////////////////////////////////////////////
//// Group_1
////////////////////////////////////////////////////////////////////////////////

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



////////////////////////////////////////////////////////////////////////////////
//// Group_2
////////////////////////////////////////////////////////////////////////////////

typedef struct EcsName {
    const char *value;      /* Entity name */
    const char *symbol;     /* Optional symbol name, if it differs from name */
    char *alloc_value;      /* If set, value will be freed on destruction */
} EcsName;

/** Component that contains the size of a component */
typedef struct EcsComponent {
    size_t size;
    size_t alignment;
} EcsComponent;

/** Metadata of an explicitly created type (ECS_TYPE or ecs_new_type) */
typedef struct EcsType {
    ecs_type_t type;        /* Preserved nested types */
    ecs_type_t normalized;  /* Resolved nested types */
} EcsType;
